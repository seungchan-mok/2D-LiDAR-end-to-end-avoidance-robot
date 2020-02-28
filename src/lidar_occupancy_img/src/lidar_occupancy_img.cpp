#include <ros/ros.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "nav_msgs/Odometry.h"
#include <tf/tf.h>

#include <sensor_msgs/PointCloud2.h>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/common/transforms.h>
#include <pcl/sample_consensus/ransac.h>
#include "visualization_msgs/Marker.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "lidar_to_occupancy_img");
    ros::NodeHandle nh;
    
    ros::spin();
}