#pragma once
class Formula
{
private:



public:
	Formula();

	virtual ~Formula() = 0;
	
	virtual bool Evaluate() = 0;
};

