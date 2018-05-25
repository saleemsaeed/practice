#ifndef CAT_H_
#define CAT_H_

class Cat {
private:
//	bool happy = true;	//c++11
	bool happy;
public:
	void makeHappy();
	void makeSad();
	void speak();
	void jump();
};

#endif