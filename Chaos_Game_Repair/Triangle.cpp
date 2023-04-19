#include "Triangle.h"

Triangle::Triangle(Vector2f inputs)
{
	position = inputs;
	fill.setPosition(position);
	fill.setSize(Vector2f(1, 1));
	fill.setFillColor(Color::Green);
}

RectangleShape Triangle::getShape()
{
	return fill;
}

Vector2f Triangle::getPosition()
{
	return position;
}

int Triangle::getPointCount()
{
	return fill.getPointCount();
}


int Triangle::getX()
{
	return position.x;
}

int Triangle::getY()
{
	return position.y;
}
