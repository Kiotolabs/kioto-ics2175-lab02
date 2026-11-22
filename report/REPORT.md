# \# Lab 02 Report: Selection and Decision-Making

# 

# \## 1. Cover information

# \- Name: Omondi Favour Shekinah

# \- Registration number: ENB211-0119/2025

# \- Programme: Agricultural Biosystems Engineering

# \- Unit: ICS 2175 C Programming

# \- Lab number: 2

# \- Date: 22/11/2026

# 

# \## 2. Objective

# I set out to learn how to make decisions in C using if, else-if and else statements. I wrote a program that reads a mark from 0 to 100 and prints the grade (A to F) and a Pass or Fail status. I also set out to learn how to use Git and GitHub to submit work: forking a repository, creating a branch, making commits and opening a pull request.

# 

# \## 3. Environment and setup

# \- Computer: HP EliteBook 840 G8, 11th Gen Intel Core i5-1145G7, 16 GB RAM

# \- Windows version: Windows 11 

# \- Code::Blocks version: 25.03

# \- Compiler/toolchain: GNU GCC Compiler (MinGW), GCC 14.2.0

# 

# \## 4. Exercise: Selection

# 

# \### Final source code

# c

# /\* Lab 02: grading program using if / else if \*/

# \#include <stdio.h>

# 

# int main(void) {

# &#x20;   int mark;

# 

# &#x20;   printf("Enter mark (0-100): ");

# &#x20;   scanf("%d", \&mark);

# 

# &#x20;   if (mark >= 80) {

# &#x20;       printf("Grade: A\\n");

# &#x20;   } else if (mark >= 70) {

# &#x20;       printf("Grade: B\\n");

# &#x20;   } else if (mark >= 60) {

# &#x20;       printf("Grade: C\\n");

# &#x20;   } else if (mark >= 50) {

# &#x20;       printf("Grade: D\\n");

# &#x20;   } else {

# &#x20;       printf("Grade: F\\n");

# &#x20;   }

# 

# &#x20;   if (mark >= 50) {

# &#x20;       printf("Status: Pass\\n");

# &#x20;   } else {

# &#x20;       printf("Status: Fail\\n");

# &#x20;   }

# 

# &#x20;   return 0;

# }

# 

# 

# \### Explanation of key statements

# \- int mark; declares an integer variable to store the mark.

# \- scanf("%d", \&mark); reads an integer from the keyboard. The \& gives scanf the memory address of mark so it can store the value there.

# \- The if / else if / else ladder checks the ranges from highest to lowest. The first condition that is true runs, and the rest are skipped. That is why mark >= 70 only needs to be checked after mark >= 80 has failed, so it only catches 70 to 79.

# \- The second if (mark >= 50) is a separate decision that prints Pass or Fail.

# \- return 0; tells the system the program ended successfully.

# 

# \### Output

# 

# Figure 1: Code::Blocks with the project and main.c open

# !\[Figure 1: Code::Blocks with project and main.c](../screenshots/compiler-s1.png)

# 

# Figure 2: Test run 1 (input 85, output Grade: A, Status: Pass)

# !\[Figure 2: Test 1, input 85](../screenshots/Test-1.png)

# 

# Figure 3: Test run 2 (input 72, output Grade: B, Status: Pass)

# !\[Figure 3: Test 2, input 72](../screenshots/Test-2.png)

# 

# Figure 4: Test run 3 (input 40, output Grade: F, Status: Fail)

# !\[Figure 4: Test 3, input 40](../screenshots/Test-3.png)

# 

# Figure 5: Boundary value test (input 80, output Grade: A, Status: Pass)

# !\[Figure 5: Boundary test, input 80](../screenshots/Test\_for\_boundary.png)



# 

# \## 5. Testing and troubleshooting

# 

# \### Boundary tests

# I ran the program with the boundary values. All results matched the grading scale.

# 

# | Input | Output |

# |---|---|

# | 0 | Grade: F, Status: Fail |

# | 40 | Grade: F, Status: Fail |

# | 49 | Grade: F, Status: Fail |

# | 50 | Grade: D, Status: Pass |

# | 59 | Grade: D, Status: Pass |

# | 60 | Grade: C, Status: Pass |

# | 69 | Grade: C, Status: Pass |

# | 70 | Grade: B, Status: Pass |

# | 79 | Grade: B, Status: Pass |

# | 80 | Grade: A, Status: Pass |

# | 85 | Grade: A, Status: Pass |

# | 100 | Grade: A, Status: Pass |

# 

# \### Error test

# I deliberately removed the semicolon after scanf("%d", \&mark) to see how the compiler reports a syntax error. The build failed and the Build messages panel showed: <<exact red message, e.g. error: expected ';' before 'if'>> Figure 6: Build error after removing the semicolon

# !\[Figure 6: Compiler error](../screenshots/Error-1.png). The reason is that every statement in C must end with a semicolon, so the compiler could not tell where the scanf statement finished. I put the semicolon back, rebuilt with 0 errors and 0 warnings, and ran the program again with 85, which gave Grade: A and Status: Pass.

# 

# \## 6. GitHub workflow

# \- Fork URL: https://github.com/shekinahfavour30-hub/kioto-ics2175-lab02

# \- Branch name: student/ENB211-0119/2025/lab02

# \- Commit summary:

# &#x20; 1. Complete selection exercises

# &#x20; 2. Implement if/else grading logic

# &#x20; 3. Complete report and tests

# \- Pull request URL:https://github.com/Kiotolabs/kioto-ics2175-lab02/pull/22

# 

# I forked the official Kiotolabs repository, cloned my fork with GitHub Desktop, created my own branch, completed main.c, committed my work, published the branch to my fork and opened a pull request to Kiotolabs/kioto-ics2175-lab02 (main).

# 

# \## 7. Reflection

# I learned how an else-if ladder works: the conditions are checked in order, so the order matters, and each condition only needs to cover the range that is left. I also learned why boundary values such as 49, 50, 79 and 80 are important to test, because mistakes with >= and > show up there.

# 

# The difficult parts were setting up Code::Blocks and finding my files, and understanding the Git workflow (fork, clone, branch, commit, push, pull request) because there were many steps and the order matters. I also had to work out which folder was the repository, because my old project folder was a different one.

# 

# Next time I would test the boundary values while I write the code, read the README and starter file before I start, and commit after each small step instead of waiting.

# 

# \## 8. Conclusion

# I achieved the objectives. The program reads a mark and prints the correct grade and Pass or Fail status for all the values I tested, including the boundary values. I also used Git and GitHub to fork, branch, commit and submit my work through a pull request.

