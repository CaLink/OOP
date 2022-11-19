#pragma once
class Call
{
public:

	int x;
	int y;

public:

	Call();
	Call(int x, int y);
	operator int() const;
	operator char() const;

};