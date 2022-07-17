//
// Created by ljq on 2022/5/17.
//

#pragma once

#include "rm_referee/hero_referee.h"

namespace rm_referee
{
class StandardReferee : public HeroReferee
{
public:
  explicit StandardReferee(ros::NodeHandle& nh, Data& data);
  void run() override;
  void capacityDataCallBack(const rm_msgs::CapacityData& capacity_data_, const ros::Time& last_get_) override;
  void powerHeatDataCallBack(const rm_msgs::PowerHeatData& power_heat_data_, const ros::Time& last_get_) override;
  void robotHurtDataCallBack(const rm_msgs::RobotHurt& robot_hurt_data_, const ros::Time& last_get_) override;

  void chassisCmdDataCallback(const rm_msgs::ChassisCmd::ConstPtr& data) override;
  void gimbalCmdDataCallback(const rm_msgs::GimbalCmd::ConstPtr& data) override;
  void shootCmdDataCallback(const rm_msgs::ShootCmd::ConstPtr& data) override;
  void coverCmdDataCallBack(const std_msgs::Float64::ConstPtr& data) override;

protected:
};
}  // namespace rm_referee
