#ifndef FACTORY
#define FACTORY
#include "box.cpp"

class Factory
{
private:
    int mPosition;
    int mSpeedDown;
    bool mIsCanChangePosition;
    bool mIsCanChangeColor;
    int mNextColor;
    int const MAX_POSITION;

    int GenerateColor();
    int GeneratePosition();

public:
    void SetPosition(int aPosition);
    int GetPosition();

    void SetSpeedDown(int aSpeedDown);
    int GetSpeedDown();

    void SetColorStatus(bool aColorStatus);
    bool GetColorStatus();


    void SetPositionStatus(bool aPositionStatus);
    bool GetPositionStatus();

    void GenerateBox();
    void GenerateTools();


};

#endif // FACTORY

