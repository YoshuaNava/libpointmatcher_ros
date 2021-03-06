#include <pointmatcher/PointMatcher.h>
#include <pointmatcher/IO.h>
#include <sensor_msgs/PointCloud2.h>
#include <sensor_msgs/LaserScan.h>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/TransformStamped.h>

namespace PointMatcher_ROS
{
	template<typename T>
	typename PointMatcher<T>::DataPoints rosMsgToPointMatcherCloud(const sensor_msgs::PointCloud2& rosMsg);
	
	template<typename T>
	typename PointMatcher<T>::DataPoints rosMsgToPointMatcherCloud(const sensor_msgs::LaserScan& rosMsg);
	
	template<typename T>
	sensor_msgs::PointCloud2 pointMatcherCloudToRosMsg(const typename PointMatcher<T>::DataPoints& pmCloud, const std::string& frame_id,
													   const ros::Time& stamp);
	
	template<typename T>
	nav_msgs::Odometry pointMatcherTransformationToOdomMsg(const typename PointMatcher<T>::TransformationParameters& inTr, const std::string& frame_id,
														   const ros::Time& stamp);
	
	template<typename T>
	typename PointMatcher<T>::TransformationParameters rosTfToPointMatcherTransformation(const geometry_msgs::TransformStamped& transformStamped,
																						 const int& transformationDimension);
	
	template<typename T>
	geometry_msgs::TransformStamped pointMatcherTransformationToRosTf(const typename PointMatcher<T>::TransformationParameters& inTr,
																	  const std::string& frame_id, const std::string& child_frame_id, const ros::Time& stamp);
}
