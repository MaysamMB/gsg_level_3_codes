# gsg_level_3_codes
**activity_schedules using recursion**

*Problem Statement:*

  Given a number of days n (1 ≤ n ≤ 10), print all possible sequences of daily activities using the set:
  {"Swimming", "Running", "Football"}
  subject to the constraint that no two consecutive days have the same activity.
  
*Input:*
  - A single integer n (1 ≤ n ≤ 10).

*Output:*
  - Print each valid schedule on its own line, with activities separated by a single space.
  - After listing all schedules, print a final line: COUNT: X where X is the total number of schedules
  generated.

**Example:**

*Input:*

n = 2

*Valid schedules:*

Football Running

Football Swimming

Running Football

Running Swimming

Swimming Football

Swimming Running

COUNT: 6

**Example 2:**

*Input:*

n = 3

*Output:*

Swimming Running Swimming

Swimming Running Football

Swimming Football Swimming

Swimming Football Running

Running Swimming Running

Running Swimming Football

Running Football Swimming

Running Football Running

Football Swimming Running

Football Swimming Football

Football Running Swimming

Football Running Football


Count: 12

*Hints:*

  - This is a recursion problem.
  - At each day, try the 3 activities but skip the one equal to the previous day's choice.


**Maysam Baradiya**

**ID:** **maysammbaradeah@gmail.com**
