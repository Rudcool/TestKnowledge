#pragma once
#include <string>
class Question
{
	 size_t& CounterTrueAnswers() {
		 static size_t counter{};
		 return counter;
		}
	 
	
	 std::string question{};
	 std::string answers{};
	 int trueAnswer{};
	 int countTrueAnswer{};
public:
	Question();
	~Question();
	Question(std::string, std::string, int);
	void GetQuestion();
	size_t GetCountTrueAnswers() {
		countTrueAnswer = CounterTrueAnswers();
		return countTrueAnswer;
	}
	 void CountTrueanswersToNull(){
		CounterTrueAnswers() -= CounterTrueAnswers();
		
	}
private:
	int TestQuestion(int);

	
};

