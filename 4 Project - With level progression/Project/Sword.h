#pragma once
#include "PlaceableActor.h"
class Sword : public PlaceableActor
{
public:
    Sword(int x, int y, ActorColor color)
        :PlaceableActor(x, y, color)
    {

    }

    virtual ActorType GetType() override { return ActorType::Sword; }
    virtual void Draw() override;

};

