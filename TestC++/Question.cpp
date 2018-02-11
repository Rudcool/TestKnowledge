#include "stdafx.h"
#include "Question.h"
#include <iostream>


Question::Question()
{
}
Question::Question(std::string question, std::string answers, int trueAnswer): 
	trueAnswer(trueAnswer), question(question), answers(answers){
	
	
}
void Question::GetQuestion() {
	int answer;
	 
	std::cout << "(Ответ должен быть от 1 до 4!)" << std::endl;
		std::cout << question << std::endl;
		std::cout << answers << std::endl;


		do {
			std::cout << "Ответ: ";
			std::cin >> answer;
		} while ((answer != 1) && (answer != 2) && (answer != 3) && (answer != 4));
		TestQuestion(answer);
		system("cls");
}
int Question::TestQuestion(int trueAnswer) {
	if (trueAnswer == this->trueAnswer) {
		++CounterTrueAnswers();
		return 0;
	}
	return 1;


	}
	


Question::~Question()
{
	
}
