class Base {
public:
	Base();
	 ~Base();
	virtual void func() const;
};

class Child: public Base {
	public:
	Child();
	~Child();
	virtual void func() const;
}

void Function(const Base &obj);
