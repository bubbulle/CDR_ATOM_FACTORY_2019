<<<<<<< HEAD
# Install script for directory: /home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/src/hardware

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install")
=======
# Install script for directory: /home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/src/hardware

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install")
>>>>>>> Gabriel
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

<<<<<<< HEAD
# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
=======
if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hardware/cmake" TYPE FILE FILES "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/hardware/catkin_generated/installspace/hardware-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/devel/share/roseus/ros/hardware")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/devel/lib/python2.7/dist-packages/hardware")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/devel/lib/python2.7/dist-packages/hardware")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/hardware/catkin_generated/installspace/hardware.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hardware/cmake" TYPE FILE FILES "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/hardware/catkin_generated/installspace/hardware-msg-extras.cmake")
>>>>>>> Gabriel
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/hardware/catkin_generated/installspace/hardware.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hardware/cmake" TYPE FILE FILES
<<<<<<< HEAD
    "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/hardware/catkin_generated/installspace/hardwareConfig.cmake"
    "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/hardware/catkin_generated/installspace/hardwareConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hardware" TYPE FILE FILES "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/src/hardware/package.xml")
=======
    "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/hardware/catkin_generated/installspace/hardwareConfig.cmake"
    "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/hardware/catkin_generated/installspace/hardwareConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hardware" TYPE FILE FILES "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/src/hardware/package.xml")
>>>>>>> Gabriel
endif()

