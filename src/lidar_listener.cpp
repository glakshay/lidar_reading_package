#include "ros/ros.h"
#include "PointCloudSegmenter.cpp"


//This is where we declare the node and its various interactions with other nodes
int main(int argc, char **argv){
  //initialize the node using arguments and with the name lidar_listener
  ros::init(argc, argv, "lidar_listener");
  float theta = -1*M_PI/2;
  ros::NodeHandle n;

  // Create class that listens to lidar messages and published the filtered and segmented data
  PointCloudSegmenter segmenter(135, 225, theta, n);
  //keep running node to obtain messages
  ros::spin();
  return 0;
}