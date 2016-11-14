#ifndef _ROS_pr2_mechanism_controllers_BaseControllerState2_h
#define _ROS_pr2_mechanism_controllers_BaseControllerState2_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Twist.h"

namespace pr2_mechanism_controllers
{

  class BaseControllerState2 : public ros::Msg
  {
    public:
      geometry_msgs::Twist command;
      uint32_t joint_command_length;
      float st_joint_command;
      float * joint_command;
      uint32_t joint_error_length;
      float st_joint_error;
      float * joint_error;
      uint32_t joint_velocity_commanded_length;
      float st_joint_velocity_commanded;
      float * joint_velocity_commanded;
      uint32_t joint_velocity_measured_length;
      float st_joint_velocity_measured;
      float * joint_velocity_measured;
      uint32_t joint_effort_measured_length;
      float st_joint_effort_measured;
      float * joint_effort_measured;
      uint32_t joint_effort_commanded_length;
      float st_joint_effort_commanded;
      float * joint_effort_commanded;
      uint32_t joint_effort_error_length;
      float st_joint_effort_error;
      float * joint_effort_error;
      uint32_t joint_names_length;
      char* st_joint_names;
      char* * joint_names;

    BaseControllerState2():
      command(),
      joint_command_length(0), joint_command(NULL),
      joint_error_length(0), joint_error(NULL),
      joint_velocity_commanded_length(0), joint_velocity_commanded(NULL),
      joint_velocity_measured_length(0), joint_velocity_measured(NULL),
      joint_effort_measured_length(0), joint_effort_measured(NULL),
      joint_effort_commanded_length(0), joint_effort_commanded(NULL),
      joint_effort_error_length(0), joint_effort_error(NULL),
      joint_names_length(0), joint_names(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->command.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->joint_command_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->joint_command_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->joint_command_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->joint_command_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint_command_length);
      for( uint32_t i = 0; i < joint_command_length; i++){
      offset += serializeAvrFloat64(outbuffer + offset, this->joint_command[i]);
      }
      *(outbuffer + offset + 0) = (this->joint_error_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->joint_error_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->joint_error_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->joint_error_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint_error_length);
      for( uint32_t i = 0; i < joint_error_length; i++){
      offset += serializeAvrFloat64(outbuffer + offset, this->joint_error[i]);
      }
      *(outbuffer + offset + 0) = (this->joint_velocity_commanded_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->joint_velocity_commanded_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->joint_velocity_commanded_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->joint_velocity_commanded_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint_velocity_commanded_length);
      for( uint32_t i = 0; i < joint_velocity_commanded_length; i++){
      offset += serializeAvrFloat64(outbuffer + offset, this->joint_velocity_commanded[i]);
      }
      *(outbuffer + offset + 0) = (this->joint_velocity_measured_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->joint_velocity_measured_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->joint_velocity_measured_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->joint_velocity_measured_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint_velocity_measured_length);
      for( uint32_t i = 0; i < joint_velocity_measured_length; i++){
      offset += serializeAvrFloat64(outbuffer + offset, this->joint_velocity_measured[i]);
      }
      *(outbuffer + offset + 0) = (this->joint_effort_measured_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->joint_effort_measured_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->joint_effort_measured_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->joint_effort_measured_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint_effort_measured_length);
      for( uint32_t i = 0; i < joint_effort_measured_length; i++){
      offset += serializeAvrFloat64(outbuffer + offset, this->joint_effort_measured[i]);
      }
      *(outbuffer + offset + 0) = (this->joint_effort_commanded_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->joint_effort_commanded_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->joint_effort_commanded_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->joint_effort_commanded_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint_effort_commanded_length);
      for( uint32_t i = 0; i < joint_effort_commanded_length; i++){
      offset += serializeAvrFloat64(outbuffer + offset, this->joint_effort_commanded[i]);
      }
      *(outbuffer + offset + 0) = (this->joint_effort_error_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->joint_effort_error_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->joint_effort_error_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->joint_effort_error_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint_effort_error_length);
      for( uint32_t i = 0; i < joint_effort_error_length; i++){
      offset += serializeAvrFloat64(outbuffer + offset, this->joint_effort_error[i]);
      }
      *(outbuffer + offset + 0) = (this->joint_names_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->joint_names_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->joint_names_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->joint_names_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint_names_length);
      for( uint32_t i = 0; i < joint_names_length; i++){
      uint32_t length_joint_namesi = strlen(this->joint_names[i]);
      memcpy(outbuffer + offset, &length_joint_namesi, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->joint_names[i], length_joint_namesi);
      offset += length_joint_namesi;
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->command.deserialize(inbuffer + offset);
      uint32_t joint_command_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      joint_command_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      joint_command_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      joint_command_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->joint_command_length);
      if(joint_command_lengthT > joint_command_length)
        this->joint_command = (float*)realloc(this->joint_command, joint_command_lengthT * sizeof(float));
      joint_command_length = joint_command_lengthT;
      for( uint32_t i = 0; i < joint_command_length; i++){
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->st_joint_command));
        memcpy( &(this->joint_command[i]), &(this->st_joint_command), sizeof(float));
      }
      uint32_t joint_error_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      joint_error_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      joint_error_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      joint_error_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->joint_error_length);
      if(joint_error_lengthT > joint_error_length)
        this->joint_error = (float*)realloc(this->joint_error, joint_error_lengthT * sizeof(float));
      joint_error_length = joint_error_lengthT;
      for( uint32_t i = 0; i < joint_error_length; i++){
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->st_joint_error));
        memcpy( &(this->joint_error[i]), &(this->st_joint_error), sizeof(float));
      }
      uint32_t joint_velocity_commanded_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      joint_velocity_commanded_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      joint_velocity_commanded_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      joint_velocity_commanded_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->joint_velocity_commanded_length);
      if(joint_velocity_commanded_lengthT > joint_velocity_commanded_length)
        this->joint_velocity_commanded = (float*)realloc(this->joint_velocity_commanded, joint_velocity_commanded_lengthT * sizeof(float));
      joint_velocity_commanded_length = joint_velocity_commanded_lengthT;
      for( uint32_t i = 0; i < joint_velocity_commanded_length; i++){
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->st_joint_velocity_commanded));
        memcpy( &(this->joint_velocity_commanded[i]), &(this->st_joint_velocity_commanded), sizeof(float));
      }
      uint32_t joint_velocity_measured_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      joint_velocity_measured_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      joint_velocity_measured_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      joint_velocity_measured_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->joint_velocity_measured_length);
      if(joint_velocity_measured_lengthT > joint_velocity_measured_length)
        this->joint_velocity_measured = (float*)realloc(this->joint_velocity_measured, joint_velocity_measured_lengthT * sizeof(float));
      joint_velocity_measured_length = joint_velocity_measured_lengthT;
      for( uint32_t i = 0; i < joint_velocity_measured_length; i++){
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->st_joint_velocity_measured));
        memcpy( &(this->joint_velocity_measured[i]), &(this->st_joint_velocity_measured), sizeof(float));
      }
      uint32_t joint_effort_measured_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      joint_effort_measured_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      joint_effort_measured_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      joint_effort_measured_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->joint_effort_measured_length);
      if(joint_effort_measured_lengthT > joint_effort_measured_length)
        this->joint_effort_measured = (float*)realloc(this->joint_effort_measured, joint_effort_measured_lengthT * sizeof(float));
      joint_effort_measured_length = joint_effort_measured_lengthT;
      for( uint32_t i = 0; i < joint_effort_measured_length; i++){
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->st_joint_effort_measured));
        memcpy( &(this->joint_effort_measured[i]), &(this->st_joint_effort_measured), sizeof(float));
      }
      uint32_t joint_effort_commanded_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      joint_effort_commanded_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      joint_effort_commanded_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      joint_effort_commanded_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->joint_effort_commanded_length);
      if(joint_effort_commanded_lengthT > joint_effort_commanded_length)
        this->joint_effort_commanded = (float*)realloc(this->joint_effort_commanded, joint_effort_commanded_lengthT * sizeof(float));
      joint_effort_commanded_length = joint_effort_commanded_lengthT;
      for( uint32_t i = 0; i < joint_effort_commanded_length; i++){
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->st_joint_effort_commanded));
        memcpy( &(this->joint_effort_commanded[i]), &(this->st_joint_effort_commanded), sizeof(float));
      }
      uint32_t joint_effort_error_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      joint_effort_error_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      joint_effort_error_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      joint_effort_error_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->joint_effort_error_length);
      if(joint_effort_error_lengthT > joint_effort_error_length)
        this->joint_effort_error = (float*)realloc(this->joint_effort_error, joint_effort_error_lengthT * sizeof(float));
      joint_effort_error_length = joint_effort_error_lengthT;
      for( uint32_t i = 0; i < joint_effort_error_length; i++){
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->st_joint_effort_error));
        memcpy( &(this->joint_effort_error[i]), &(this->st_joint_effort_error), sizeof(float));
      }
      uint32_t joint_names_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      joint_names_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      joint_names_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      joint_names_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->joint_names_length);
      if(joint_names_lengthT > joint_names_length)
        this->joint_names = (char**)realloc(this->joint_names, joint_names_lengthT * sizeof(char*));
      joint_names_length = joint_names_lengthT;
      for( uint32_t i = 0; i < joint_names_length; i++){
      uint32_t length_st_joint_names;
      memcpy(&length_st_joint_names, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_joint_names; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_joint_names-1]=0;
      this->st_joint_names = (char *)(inbuffer + offset-1);
      offset += length_st_joint_names;
        memcpy( &(this->joint_names[i]), &(this->st_joint_names), sizeof(char*));
      }
     return offset;
    }

    const char * getType(){ return "pr2_mechanism_controllers/BaseControllerState2"; };
    const char * getMD5(){ return "d4b64baf09d8cb133f3f2bc279de1137"; };

  };

}
#endif