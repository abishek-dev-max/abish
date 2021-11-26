#include<iostream>
#include<ctime>
void PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nyou are hacker breaking into a level "<<Difficulty; //introduction messages
    std::cout << " secret room..\nenter the correct code\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    const int Codea=rand() % Difficulty+Difficulty;
    const int Codeb=rand() % Difficulty+Difficulty; //declaring the variables
    const int Codec=rand() % Difficulty+Difficulty;

    const int CodeSum=Codea + Codeb + Codec; //doing arithmetic operators
    
    const int CodeProduct=Codea*Codeb*Codec;

    //printing the output of given arithmetic operators
    std::cout <<"+ there are 3 number in the code";
    
    std::cout <<"\n+ the codes add up to:"<< CodeSum;

    std::cout <<"\n+ these codes multiply to give :"<< CodeProduct<<std::endl;

    int GuessA,GuessB,GuessC;

    std::cin >> GuessA>> GuessB>>GuessC;
    
    int GuessSum=GuessA+ GuessB + GuessC;
    int GuessProduct=GuessA * GuessB * GuessC;;


    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout <<"\nWOW! you have chosen the correct number,keep going";
        return true;
    }
    
    else
    {
        std::cout <<"\nWrong Number!!be careful";
        return false;
    }
 

   
}

int main()
{
    srand(time(NULL));
    int LevelDifficulty=1;
    const int MaxDifficulty=6;
    
    while(LevelDifficulty <= MaxDifficulty)
     {
         std::cout<< rand() % 5<<"\n";
     bool blevelcomplete = PlayGame(LevelDifficulty);  
     std::cin.clear();//clear any errors
     std::cin.ignore();//discards the buffer
    
    if(blevelcomplete=LevelDifficulty)
    {
        ++LevelDifficulty;
    }
     }
    std::cout<<"\nGood Work..get the files and get out of there";
     return 0;
}