# COMP 3004: Object-Oriented Software Engineering

## Course Overview

COMP 3004 is an Object-Oriented Software Engineering course at Carleton University that covers theory and development of software systems, with emphasis on:

- Software development processes
- Requirement specification
- Class and scenario modeling
- State modeling
- UML (Unified Modeling Language)
- Design patterns
- Traceability
- Computer ethics

**Prerequisites:** COMP 2004 or COMP 2404  
**Credits:** 0.5  
**Format:** 3 hours of lectures per week

---

## Assignments

### Assignment 1: Software Engineering Concepts & Case Studies

Research and analysis of fundamental software engineering concepts and real-world case studies.

**Topics Covered:**
- **Use Cases** - Study of Alistair Cockburn's chapter on use case modeling and documentation
- **Physical System Analysis** - Video notes on elevator installation and engineering principles
- **Software Safety** - Analysis of the Therac-25 incident and its lessons for software engineering

**Deliverables:**
- Research notes and analysis documents
- Comprehensive PDF report

---

### Assignment 2: Elevator Control System (C++ Implementation)

Design and implement a complete elevator control system in C++, comparing centralized and distributed architectures.

**System Architecture:**
- **Centralized Architecture** - Single controller manages all elevators using request queues
- **Distributed Architecture** - Elevators manage themselves independently with dynamic allocation

**Key Components:**
- `Elevator` - Core elevator logic with floor tracking, direction, and door control
- `Button` - Floor buttons (external) and elevator buttons (internal)
- `Door` - Door mechanics and sensors
- `DoorSensor` - Floor position detection
- `ExternalButtons` - Call buttons on each floor
- `FloorController` - Centralized request management
- Additional sensors for fire alarms, overload detection, and light sensing

**Deliverables:**
- C++ header files with class definitions
- UML class diagrams (centralized and distributed)
- State diagrams for system behavior
- Sequence diagrams for various scenarios
- Design documentation and RTM (Requirements Traceability Matrix)
- Scenario coverage:
  - Single elevator operations
  - Multiple elevator coordination
  - Fire alarm handling
  - Power outage scenarios
  - Overload detection
  - Light sensor integration
  - Emergency help button functionality

---

## Repository Structure

```
COMP3004-Cpp/
├── Assignment1/
│   ├── AlistarChpt1Notes.txt          # Use case modeling notes
│   ├── ElevatorVideoNotes.txt         # Physical elevator engineering analysis
│   ├── TheracArticleNotes.txt         # Software safety case study
│   └── comp3004_w24_101157121_assignment_01.pdf
├── Assignment2/
│   ├── A2_COMP_3004/
│   │   ├── header_files/              # C++ header files
│   │   ├── centralized_class_diagram.png
│   │   ├── decentralized_class_diagram.png
│   │   ├── state_diagram*.png         # State diagrams
│   │   ├── *_sequence.png             # Sequence diagrams
│   │   ├── RTM.pdf                    # Requirements Traceability Matrix
│   │   └── [scenario diagrams]
│   ├── a2Approach.txt                 # Design approach notes
│   ├── Details.txt
│   └── a2Tester/
└── a3Tester/
```

---

## License

**All Rights Reserved - No Permission for External Use**

This code and all associated materials are the exclusive property of the author. Unauthorized copying, modification, or use of any part of this work is strictly prohibited. This work is provided for educational purposes only within Carleton University.
