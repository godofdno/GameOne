#include "factory.h"
//#include <random>
#include "box.h"
#include <ctime>

void Factory::SetPosition(int aPosition)
{
    this->mPosition = aPosition;
}

int Factory::GetPosition()
{
    return this->mPosition;
}

void Factory::SetSpeedDown(int aSpeedDown)
{
    this->mSpeedDown = aSpeedDown;
}

int Factory::GetSpeedDown()
{
    return this->mSpeedDown;
}

void Factory::SetColorStatus(bool aColorStatus)
{
    this->mIsCanChangeColor = aColorStatus;
}

bool Factory::GetColorStatus()
{
    return this->mIsCanChangeColor;
}

void Factory::SetPositionStatus(bool aPositionStatus)
{
    this->mIsCanChangePosition = aPositionStatus;
}

bool Factory::GetPositionStatus()
{
    return this->mIsCanChangePosition;
}

int Factory::GenerateColor()
{
    int aColor = rand() % Box::LAST;

    return aColor;
}

int Factory::GeneratePosition()
{
    int aPosition = rand() % MAX_POSITION + 1;

    return aPosition;
}

void Factory::GenerateBox()
{
    srand( time(0) );

    QPair <int,int> aCoordinate;
    aCoordinate.first = mPosition; //not final
    aCoordinate.second = 0; //not final

    Box::Color aColor = (Box::Color) mNextColor;

    Box(aColor,aCoordinate); //(Color of box , first box coordinate)

    if (mIsCanChangeColor)
    {
        mNextColor = GenerateColor();
    }
    if (mIsCanChangePosition)
    {
        mPosition = GeneratePosition();
    }

}

void Factory::GenerateTools()
{

}
