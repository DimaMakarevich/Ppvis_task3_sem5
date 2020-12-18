class  C3 
{
public:
	virtual void f1() = 0;
	virtual void f2() = 0;
	C1 r2;
};


class C2
{
public:
	void f1();

protected:
	int a1;
};


class C4 : public C5
{
public:
	C2 *r2;
	void f1();
	void f2();
protected:
	C1 r1;
};

class C5 :  virtual public C3
{
public:
	int a1;
	int a2;
	void f1();
	void f2();
	void f3();

};

class C1
{
protected:
	int a1[10];
};

void main()
{

}