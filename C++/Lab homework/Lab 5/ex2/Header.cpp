#pragma once

#include "Header.h"

string Form::getName() {
		return name;
}

void Form::setName(string name) {
		this->name = name;
}

string Form::getColor() {
	return color;
}

void Form::setColor(string color) {
	this->color = color;
}

void Rectangle::setWidth(int width) {
	this->width = width;
}

int Rectangle::getWidth() {
	return width;
}

void Rectangle::setHeight(int height) {
	this->width = height;
}

int Rectangle::getHeight() {
	return height;
}

string Rectangle::getNumePrenume(string prenume) {
	return name + prenume;
}



