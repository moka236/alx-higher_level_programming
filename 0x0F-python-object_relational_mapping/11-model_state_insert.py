#!/usr/bin/python3
""" prints the State object with the name passed as argument from the database
"""
import sys
from model_state import Base, State
from sqlalchemy import (create_engine)
from sqlalchemy.orm import sessionmaker


if __name__ == "__main__":
    engine = create_engine('mysql+mysqldb://{}:{}@localhost:3306/{}'
                           .format(sys.argv[1], sys.argv[2], sys.argv[3]))
    Base.metadata.create_all(engine)
    Session1 = sessionmaker(bind=engine)
    session1 = Session1()
    new_state = State(name='Louisiana')
    session1.add(new_state)
    new_instance = session1.query(State).filter_by(name='Louisiana').first()
    print(new_instance.id)
    session1.commit()
