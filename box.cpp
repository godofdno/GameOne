#include "box.h"

Box::Box(Color aColor, QPair <int,int> aCoordinate)
{
    mColor = aColor;
    if (aColor == -1)
    {
        mIsCanMove = false;
    }

    mCoordinate = aCoordinate;
}

Box::~Box()
{

}

QPair <int,int> Box::GetCoordinate()
{
    return this->mCoordinate;
}

void Box::SetCoordinate(QPair<int, int> aCoordinate)
{
    this->mCoordinate = aCoordinate;
}

Box::Color Box::GetColor()
{
    return this->mColor;
}

void Box::SetColor(Color aColor)
{
    this->mColor = aColor;
}

bool Box::GetMoveStatus()
{
    return this->mIsCanMove;
}

void Box::SetMoveStatus(bool aCanMove)
{
    this->mIsCanMove = aCanMove;
}




