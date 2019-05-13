#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "route_model.h"


class RoutePlanner {
  public:
    RoutePlanner(RouteModel &model, float start_x, float start_y, float end_x, float end_y);
    // Add public variables or methods declarations here.
    float Getdistance() { return distance; }

  private:
    // Add private variables or methods declarations here.
    RouteModel &m_Model;
    RouteModel::Node *start_node, *end_node;
    float distance;
};
