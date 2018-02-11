#pragma once
class Application
{
	public: 
	enum statusApp {
		greeting

	};

private:
	statusApp status = greeting;
public:
	void doStepOfProgram();
	Application();
	~Application();
};

