#include "pch.h"
#include<iostream>
using namespace std;

class Check 
{
	int val;
public:
	Check() : val(0) 
	{

	}

	void setValue(int newVal) 
	{
		this->val = newVal;
	}

	int getValue() {
		return this->val;
	}
};
// Test Fixture
struct TF : testing::Test 
{
	Check* c1;
	void SetUp() { cout << "Setup" << endl;  c1 = new Check(); };
	void TearDown() { cout << "Teardown" << endl; delete c1; };
};

TEST_F( TF, SubTestName ) {
	
	// Arrange
	// Act
	c1->setValue(100);
	// Assert
	ASSERT_EQ(c1->getValue(), 100);
}

TEST_F( TF, SubTestName_1) {

	// Arrange
	// Act
	c1->setValue(500);
	// Assert
	ASSERT_EQ(c1->getValue(), 500);
}