## CSC_MCE_Part1

Building an algorithm to interpret course grades into a semester final grade.

Chris Lawler, Matthew Hayes, Mubariz Saeed, Dominic Silva

# Part 1
_________________________________________________________________________________________________________________________________________________________________________
# Flowchart 
Flowchart of the code's Operation:
![image](https://user-images.githubusercontent.com/98554125/198723424-be053a11-851e-42b4-8079-db8228211be6.png)
1. The code will ask you to choose between 4 datasets which have been hardcoded and assigned as classes.
2. Then it will ask you to choose an option which you can do by inputting 1-5.
3. Inputting 1-4 will run a function print out what you have requested and go back to the 2nd step.
4. inputting 5 will stop the loop and end the program.






# Inputs/Outputs
The input that our code will take in is a name and the data that the user wants to see. The data could be the number grade, letter grade or midterm grade or categorical grade. For example, if the user enters the name “Chris”, and the data the user wants is the number grade. The user would enter the name first and the choice they want to see. The program will first tell the user to enter a name and then show a list of each choice which is 1,2,3,4,5. Choice 1 is final grade, Choice 2, letter grade, choice 3 midterm grade, choice 4 is categorical grade and choice 5 would exit the program. For example, the user enters the name “Chris” and then the user enters choice 1. The program will call calculateFinalGrade() function and use the hard coded dataset for that name and calculate the final grade for that person. We also wanted to implement an exception handling block of code that would break until the user enters the right name/s. For example, if the user enters “Anna” , the program would not break unless the user enters one of the names in the dataset. After the user enters their data. The program would then output whatever the user wanted to see, it could be there letter grade, categorical grade or midterm grade



# Psuedocode For Finalgrade function
	Initialize assignment pts to zero

	Initialize lab pts to zero

	Initialize finalExamPts to final_exam private variable 

	Initialize mecprojects to mec_project private variable 

	Initialize final project to final_project private variable

	Using a for loop traverse through assignment vector data set and sum each value and store it in the assignment pts variable

	Using another for loop traverse through lab vector data set and sum each value and store it in the lab pts pts variable

	Initialize total pts to the sum of assignment pts, lab pts ,finalExamPts, mecProjectPts, finalProjectPts and device by 10 for the final grade value

	Return totalpts 

# Psuedocode For LetterGrade function
	Parameter one is totalPts which is the final grade
  
	Initialize string letter variable
  
	Create numerous if statement block
  
		if totalpts is greater than 94
			Then set letter to A
		else if total pts is in the range 90-94
			Then set letter to A-
		else if total pts is in the range 87-90
			Then set letter to B+
		else if total pts is in the range 80-83
			Then set letter to B-
		else if total pts is in the range 77-80
			Then set letter to C+
		else if total pts is in the range 73-77
			Then set letter to C
		else if total pts is in the range 70-73
			Then set letter to C-
		else if total pts is in the range 67-70
			Then set letter to D+
		else if total pts is in the range 60-67
			Then set letter to D
		else then set letter to F
		
		return the letter
# Pseudocode for calculateCategoricalGrade function
	Initialize the variables for each section, the five sections are assignments, labs, final exam, final project and mec.
	
	for final exam, final project, and mec the grade doesnt need to be calculated and is assigned directly when the class is created.
	
	create a for loop that will run through the entire assignments vector
		add to the assignment variable to find the total amount of points the student got for that section.
		
	create a for loop that will run through the whole lab vector
		add to the lab variable and find the total amount of points the student got for the lab section.
	
	divide assignments by 500 and multiply by 10 to get the percent total for that section
	
	divide labs by 50 and multiply by 10 to get the percent total for that section
	
	divide final exam by 100 and multiply by 10 to get the percent total for that section
	
	divide final project by 350 and multiply by 10 to get the percent total for that section
	
	divide mec by 30 and multiply by 10 to get the percent total for that section
	
	print assignment grade: assignmenttotal %
	
	print lab grade: labtotal %
	
	print final exam grade: finalexam %
	
	print final project grade: finalproject %
	
	print mec grade: mec %
# Pseudocode for midtergrade function 
	Initialize assignmentTotal to zero

	Initialize LabTotal to zero

	Initialize totalGrade to zero

	Using a for loop that loops 3 times and traverses through the assignment vector data set and sum the first 3 assignment grades and store it in the assignment Total variable

	Using another for loop that loops 6 times and traverses through the lab vector data set and sums the first 6 grades and stores it in labTotal variable 

	Return total grade that has reassigned total grade to the sum of assignment total and lab total

