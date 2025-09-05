#include <iostream>

int main() {

    std::string questions[] = {"1. What year was C++ created?: ", "2. Who invented C++?: ", "3. What is the predecessor of C++?: ", "4. Who is the Tingus Pingus?: "} ;

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                               {"A. Bjarne Stroustrup", "B. Dennis Ritchie", "C. Ken Thompson", "D. Brian Kernighan"},
                               {"A. C", "B. B", "C. A", "D. D"},
                               {"A. Aaron Wiggins", "B. Arvydas Sabonis", "C. Kristaps Porzingis", "D. Bogdan Bogdanovic"}};
    char answers[] = {'C', 'A', 'A', 'C'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i<size; i++){
        std::cout << "*****************************" << std::endl;
        std::cout << questions[i] << std::endl;
        std::cout << "*****************************" << std::endl;
        for(int j = 0; j< sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << std::endl;
        }

        std::cout << "Enter your answer: ";
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answers[i]){
            std::cout << "Correct!" << std::endl;
            std::cout << std::endl;
            score++;
        } else {
            std::cout << "Incorrect!" << std::endl;
            std::cout << "The correct answer is: " << answers[i] << std::endl;
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
    std::cout << "Results: " << std::endl;
    std::cout << "Correct guesses: " << score << std::endl;
    std::cout << "# of questions: " << size << std::endl;
    std::cout << "Final grade: " << ((double)score/size) * 100 << "%" << std::endl;



    return 0;
}