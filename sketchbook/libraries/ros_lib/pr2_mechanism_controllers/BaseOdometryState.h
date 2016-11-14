#ifndef _ROS_pr2_mechanism_controllers_BaseOdometryState_h
#define _ROS_pr2_mechanism_controllers_BaseOdometryState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Twist.h"

namespace pr2_mechanism_controllers
{

  class BaseOdometryState : public ros::Msg
  {
    public:
      geometry_msgs::Twist velocity;
      uint32_t wheel_link_names_length;
      char* st_wheel_link_names;
      char* * wheel_link_names;
      uint32_t drive_constraint_errors_length;
      float st_drive_constraint_errors;
      float * drive_constraint_errors;
      uint32_t longitudinal_slip_constraint_errors_length;
      float st_longitudinal_slip_constraint_errors;
      float * longitudinal_slip_constraint_errors;

    BaseOdometryState():
      velocity(),
      wheel_link_names_length(0), wheel_link_names(NULL),
      drive_constraint_errors_length(0), drive_constraint_errors(NULL),
      longitudinal_slip_constraint_errors_length(0), longitudinal_slip_constraint_errors(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->velocity.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->wheel_link_names_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->wheel_link_names_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->wheel_link_names_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->wheel_link_names_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->wheel_link_names_length);
      for( uint32_t i = 0; i < wheel_link_names_length; i++){
      uint32_t length_wheel_link_namesi = strlen(this->wheel_link_names[i]);
      memcpy(outbuffer + offset, &length_wheel_link_namesi, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->wheel_link_names[i], length_wheel_link_namesi);
      offset += length_wheel_link_namesi;
      }
      *(outbuffer + offset + 0) = (this->drive_constraint_errors_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->drive_constraint_errors_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->drive_constraint_errors_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->drive_constraint_errors_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->drive_constraint_errors_length);
      for( uint32_t i = 0; i < drive_constraint_errors_length; i++){
      offset += serializeAvrFloat64(outbuffer + offset, this->drive_constraint_errors[i]);
      }
      *(outbuffer + offset + 0) = (this->longitudinal_slip_constraint_errors_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->longitudinal_slip_constraint_errors_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->longitudinal_slip_constraint_errors_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->longitudinal_slip_constraint_errors_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->longitudinal_slip_constraint_errors_length);
      for( uint32_t i = 0; i < longitudinal_slip_constraint_errors_length; i++){
      offset += serializeAvrFloat64(outbuffer + offset, this->longitudinal_slip_constraint_errors[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->velocity.deserialize(inbuffer + offset);
      uint32_t wheel_link_names_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      wheel_link_names_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      wheel_link_names_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      wheel_link_names_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->wheel_link_names_length);
      if(wheel_link_names_lengthT > wheel_link_names_length)
        this->wheel_link_names = (char**)realloc(this->wheel_link_names, wheel_link_names_lengthT * sizeof(char*));
      wheel_link_names_length = wheel_link_names_lengthT;
      for( uint32_t i = 0; i < wheel_link_names_length; i++){
      uint32_t length_st_wheel_link_names;
      memcpy(&length_st_wheel_link_names, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_wheel_link_names; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_wheel_link_names-1]=0;
      this->st_wheel_link_names = (char *)(inbuffer + offset-1);
      offset += length_st_wheel_link_names;
        memcpy( &(this->wheel_link_names[i]), &(this->st_wheel_link_names), sizeof(char*));
      }
      uint32_t drive_constraint_errors_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      drive_constraint_errors_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      drive_constraint_errors_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      drive_constraint_errors_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->drive_constraint_errors_length);
      if(drive_constraint_errors_lengthT > drive_constraint_errors_length)
        this->drive_constraint_errors = (float*)realloc(this->drive_constraint_errors, drive_constraint_errors_lengthT * sizeof(float));
      drive_constraint_errors_length = drive_constraint_errors_lengthT;
      for( uint32_t i = 0; i < drive_constraint_errors_length; i++){
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->st_drive_constraint_errors));
        memcpy( &(this->drive_constraint_errors[i]), &(this->st_drive_constraint_errors), sizeof(float));
      }
      uint32_t longitudinal_slip_constraint_errors_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      longitudinal_slip_constraint_errors_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      longitudinal_slip_constraint_errors_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      longitudinal_slip_constraint_errors_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->longitudinal_slip_constraint_errors_length);
      if(longitudinal_slip_constraint_errors_lengthT > longitudinal_slip_constraint_errors_length)
        this->longitudinal_slip_constraint_errors = (float*)realloc(this->longitudinal_slip_constraint_errors, longitudinal_slip_constraint_errors_lengthT * sizeof(float));
      longitudinal_slip_constraint_errors_length = longitudinal_slip_constraint_errors_lengthT;
      for( uint32_t i = 0; i < longitudinal_slip_constraint_errors_length; i++){
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->st_longitudinal_slip_constraint_errors));
        memcpy( &(this->longitudinal_slip_constraint_errors[i]), &(this->st_longitudinal_slip_constraint_errors), sizeof(float));
      }
     return offset;
    }

    const char * getType(){ return "pr2_mechanism_controllers/BaseOdometryState"; };
    const char * getMD5(){ return "8a483e137ebc37abafa4c26549091dd6"; };

  };

}
#endif