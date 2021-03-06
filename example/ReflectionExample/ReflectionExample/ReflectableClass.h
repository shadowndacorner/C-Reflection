/*
Copyright (c) 2017 Ian Diaz

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once
#include <string>
#include <vector>

// ALLOW_PRIVATE_REFLECTION
#include <reflection.hpp>

namespace reflection_example
{
	class Mammal
	{
	public:
		int age;
	};

	class Human : Mammal
	{
		// Declare that the reflection system can access
		// private members
		ALLOW_PRIVATE_REFLECTION(Human);
		
	public:
		std::string name;
		std::vector<Human> children;
		void* ptr;

		int GetAge();
	};

	// Test for polymorphic type determination
	class BaseClass
	{
	public:
		virtual void virtual_method(){}

		int i;
	};

	class ChildClass : public BaseClass
	{
	public:
		int y;
	};
}

struct int3
{
	int x, y, z;
};
