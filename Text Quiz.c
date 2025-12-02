#include<stdio.h>
#include<stdbool.h>


void introduction()
{
    char name[100];
    printf("Welcome to Debbie's QuizSage!\n");
    printf("Please input your name to register:");
    scanf("%s", &name);
    printf("Dear %s, you have successfully registered for Debbie's QuizSage.\n", name);
    printf("================================================================\n");

}

void instructions()
{
    printf("INSTRUCTIONS:\n");
    printf("==========================================\n");
    printf("1. All questions are multiple choice.\n");
      printf("==========================================\n");
    printf("2. There are 20 questions in this QuiSage.\n");
      printf("==========================================\n");
    printf("3. Each question carry five mark for correct answer and zero marks for incorrect answer.\n");
       printf("==========================================\n");
    printf("4. Whatever we learned so far is being tested in this quiz.\n");
       printf("==========================================\n");
    printf("5. Please note down the scores you gain in this quiz for self evaluation.\n");
       printf("==========================================\n");
    printf("6. Wishing you best of luck!\n");
      printf("==========================================\n");
}
void questions()
{
    char answer;
    int score;

    printf("1. What is a 'bit field' in C?\nA. A bit field is a memory location that can only store 1 - 10\nB. A bit field is a structure that allows you to pack data into a single variable\nC. A bit field is a type of variable that stores a single bit of data\nD. A bit field is a type of array that stores bit of data\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'B')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is B\n");
    }
    printf("============================================================================================\n");
    printf("2. Holding a mouse button down while moving an object of text is known as?\nA. Highliting\nB. Dropping\nC. Dragging\nD. Moving\n\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'C')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is C\n");
    }
      printf("============================================================================================\n");
    printf("3. Most of the commonly available personal computers/laptops have a keyboard popularly known as?\nA. UCLIF\nB. ALTER\nC. QOLTY\nD. QWERTY\n\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'D')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is D\n");
    }
    printf("============================================================================================\n");
    printf("4. How is a random number generated in C?\nA. There is no way to genarte random number in c\nB. Generate a random number with the rand() function\nC. Generate a random number with the RAND() function\nD. B & C are both correct\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'B')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is B\n");
    }
      printf("============================================================================================\n");
    printf("5. Video controller ______.\nA. controls the resolution of images on screen\nB. controls the signals to be sent and received from processor for display\nC. is responsible for allocating pixels for formation of images\nD. handles the entire elctronic work behind the formation of images on the screen\n\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'D')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is D\n");
    }
    printf("============================================================================================\n");
    printf("6. _____ key is an example of a Toggle key\nA. Caps lock\nB. Control\nC. Escape\nD. Shift\n\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'A')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is A\n");
    }
      printf("============================================================================================\n");
    printf("7. Which of the following is not a function of the control unit?\nA. Execute instructions\nB. Interpret instructions\nC. Direct operations\nD. Read instructions\n\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'A')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is A\n");
    }
      printf("============================================================================================\n");
    printf("8. The activity of removing an error in a program is called ______.\nA. Entering\nB. Editing\nC. Debugging\nD. Compiling\n\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'C')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is C\n");
    }
      printf("============================================================================================\n");
      printf("9. Which of the following is a way to comment out code in C?\nA. /*this is a comment*/\nB. //this is a comment\nC. //this is another comment\nD. all of the above\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'D')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is D\n");
    }
      printf("============================================================================================\n");
    printf("10. Keyword used to create a structured data type is ______.\nA. struct\nB. structure\nC. struc\nD. structr\n\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'A')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is A\n");
    }
      printf("============================================================================================\n");
    printf("11. Resolution refers to the _____.\nA. minimum size of image\nB. number of pixels used on the screen\nC. number of images that can be replaced at a given time\nD. all of the above\n\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'B')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is B\n");
    }
      printf("============================================================================================\n");
    printf("12. Pointer variables may be assigned as ____.\nA. address value represented in binary notation\nB. address value represented in hexadecimal notation\nC. address value represented in octal notation\nD. address of another variable\n\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'D')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is D\n");
    }
      printf("============================================================================================\n");
      printf("13. What does the main function do in a C program?\nA. It has the programs's logic\nB. It returns a value to the operating system when the program is done\nC. It executes first when the program is done\nD. All of the above\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'D')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is D\n");
    }
      printf("============================================================================================\n");
    printf("14. Which of the following is not true about continue statement?\nA. It terminates the loop\nB. It can be used in conjunction with switch statement\nC. It terminates the current iteration\nD. None of the above\n\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'C')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is C\n");
    }
      printf("============================================================================================\n");
    printf("15. ASCII decimal range of characters from A-Z is ?\nA. 65-90\nB. 97-122\nC. 100-127\nD. 1-28\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'A')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is A\n");
    }
      printf("============================================================================================\n");
    printf("16. Size of integer?\nA. 32 bytes\nB. 8 bytes\nC. 16 bytes\nD. Depends on machine to machine\n");
    printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'D')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is D\n");
    }
      printf("============================================================================================\n");
    printf("17. What is the output of this snippet of code?\n============================================\n#include<stdio.h>\nint main(){\nint x = 5;\nint y = 2;\nprint('d', x/y);\nreturn 0;\n}\nA. 2\nB. 2.5\nC. 3\nD. 5\n");
        printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'A')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is A\n");
    }
      printf("============================================================================================\n");  
    printf("18. What is the output of this code?\n=====================================\n#include<stdio.h>\nint main(){\nint x = 7;\nint y = 3;\nprintf('d', x+y\nreturn 0;\nA. 10\nB. 3\nC. 15\nD. 2.5\n");
            printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'A')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is A\n");
    }
      printf("============================================================================================\n");
      printf("19. In C, which operator is used to increment a variable by 1?\nA. ++\nB. +=1\nc. +1\nD. =+1\n");
      printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'A')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is A\n");
    }
      printf("============================================================================================\n");
      printf("20. Which of the following is a valid C name?\nA. 2speed\nB. int10\nC. isawhim\nD. $first_name\n");
      printf("Answer:");
        scanf("%c", &answer);
        scanf("%c");
    if(answer == 'B')
    {
        printf("CORRECT!\n");
        score+=5;
    }
    else
    {
        printf("INCORRECT!\n");
        printf("The correct answer is B\n");
    }
      printf("============================================================================================\n");
}


int main()
{
    char name[100];
    char answer;
    int input;
    int score;

    introduction();
    instructions();

    printf("================================================================\n");  
    printf("Press 1 to display questions\n");
    printf("Press 0 to exit\n");
    scanf("%d", &input);
    printf("================================================================\n"); 
    if(input == 1)
    {
        questions();
        printf("You have succesfully completed Debbie's QuiSage.\n");
        printf("=========================================================\n"); 
        printf("Your score would be shown next. Wait for it!!\n");
        printf("=========================================================\n"); 
         printf("Your total score is %d\n", score);
         printf("=========================================================\n"); 

        if(score >= 700)
        {
            printf("You passed!\n");
        }
        else if(score >= 400)
        {
            printf("You can do better next time.\n");
        }
        else 
        {
            printf("Try harder!\n");
        }
    }

    else if(input == 0)
    {
        printf("You have successfully exited Debbie's QuiSage\n");
        exit(0);
    }

    else
    {
       printf("Invalid input!");
    }


return 0;
}
   
