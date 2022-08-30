#include <stdio.h>

int main()
{
    float Subject1, Subject2, Subject3;
    int Total_Score;

    printf("Enter your grades for evaluation.\nNote: You can only enter for 3 subjects\n");
    
    //Enter grades for the 3 subjects
    printf("Subject 1: ");
    scanf("%f", &Subject1);

    printf("Subject 2: ");
    scanf("%f", &Subject2);

    printf("Subject 1: ");
    scanf("%f", &Subject3);

    //Check if each subject attains a pass mark of 33%
    if (Subject1 < 33 || Subject2 < 33 || Subject3 < 33)
    {
        printf("Your scores are less than 33%% each!\nYou failed!");
        return 0;
    }
    

    //Calculate the total scores
    Total_Score = (Subject1 + Subject2 + Subject3)/3;
    //Check whether the User deosn't input more than required
    if (Total_Score > 100)
    {
        printf("Your Total Scores cannot be more than 100!");
        return 0;
    }
    else
    {
            printf("Total Scores: %d%%\n", Total_Score);
    }

    //Check if the total scores attains the pass mark of 40%
    if (Total_Score < 40)
    {
        printf("You failed!");
    }
    else
    {
        printf("Congratulations!!! You passed!");
    }
    

    return 0;
}