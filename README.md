# xv6 MFQ Scheduling Enhancement

This project enhances the xv6 operating system's scheduler by implementing a Multi-level Feedback Queue (MFQ). Designed to replace the default Round Robin scheduler, this modification introduces a more efficient process management system, catering to varying process priorities and execution needs.

## Key Features:
- **Four Priority Levels:** Processes are categorized into four distinct priority levels, from highest (3) to lowest (0), with dynamic priority adjustments based on execution behavior.
- **Tailored Time Quanta:** Each priority level has a specific time quantum, ranging from 200ms for the highest priority to 1600ms for the lowest, optimizing CPU time allocation.
- **Process State Tracking:** Enhanced process tracking mechanisms to monitor and adjust process states and priorities, improving overall system responsiveness and fairness.

## Technical Highlights:
- Custom modifications were made to xv6's scheduling algorithm, `proc.h`, and `proc.c` files to incorporate MFQ logic.
- The project is set up for a single hardware thread/CPU to focus on the MFQ implementation's effectiveness without the complexity of multi-threading.
- Utilizes fixed-size arrays for queue management, simplifying the implementation within xv6's constraints.

## Outcome:
The MFQ scheduling enhancement brings a significant improvement to xv6 by allowing for more nuanced process management, potentially increasing the operating system's efficiency and responsiveness under varied workload conditions.
