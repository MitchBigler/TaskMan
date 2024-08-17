#pragma once

using namespace System;

// Defines a managed class `Task`. ref indicates that it's in C++/CLI
public ref class Task
{

public:
	// These are the variables of the class
	String^ Name;
	String^ Description;

	// Class constructor
	Task(String^ name, String^ description) {
		// Assign class variables to constructor params
		Name = name;
		Description = description;
	}

	// Override ToString to output as Name 
	String^ ToString() override {
		return Name;
	}

};