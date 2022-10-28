## CSC_MCE_Part1

Building an algorithm to interpret course grades into a semester final grade.

Chris Lawler, Matthew Hayes, Mubariz Saeed, Dominic Silva

# Part 1
_________________________________________________________________________________________________________________________________________________________________________
# Flowchart 






# Inputs/Outputs
The input that our code will take in is a name and the data that the user wants to see. The data could be the number grade, letter grade or midterm grade or categorical grade. For example, if the user enters the name “Chris”, and the data the user wants is the number grade. The user would enter the name first and the choice they want to see. The program will first tell the user to enter a name and then show a list of each choice which is 1,2,3,4,5. Choice 1 is final grade, Choice 2, letter grade, choice 3 midterm grade, choice 4 is categorical grade and choice 5 would exit the program. For example, the user enters the name “Chris” and then the user enters choice 1. The program will call calculateFinalGrade() function and use the hard coded dataset for that name and calculate the final grade for that person. We also wanted to implement an exception handling block of code that would break until the user enters the right name/s. For example, if the user enters “Anna” , the program would not break unless the user enters one of the names in the dataset. After the user enters their data. The program would then output whatever the user wanted to see, it could be there letter grade, categorical grade or midterm grade



# PsuedoCode For Finalgrade() func
Initialize assignment pts to zero

Initialize lab pts to zero

Initialize finalExamPts to final_exam private variable 

Initialize mecprojects to mec_project private variable 

Initialize final project to final_project private variable

Using a for loop traverse through assignment vector data set and sum each value and store it in the assignment pts variable

Using another for loop traverse through lab vector data set and sum each value and store it in the lab pts pts variable

Initialize total pts to the sum of assignment pts, lab pts ,finalExamPts, mecProjectPts, finalProjectPts and device by 10 for the final grade value

Return totalpts 

![image](https://user-images.githubusercontent.com/98554125/198723424-be053a11-851e-42b4-8079-db8228211be6.png)

