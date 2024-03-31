#ifndef RAYTRACING_INTERVAL_H
#define RAYTRACING_INTERVAL_H

#include "common.h"

class interval
{
public:
    double min;
    double max;

    interval() : min(+infinity), max(-infinity) {} // Default interval is empty
    interval(double _min, double _max) : min(_min), max(_max) {}

    bool contains(double x) const
    {
        return min <= x && x <= max;
    }

    bool surrounds(double x) const
    {
        return min < x && x < max;
    }

    static const interval empty;
    static const interval universe;
};

const static interval empty   (-infinity, +infinity);
const static interval universe(-infinity, +infinity);

#endif //RAYTRACING_INTERVAL_H
