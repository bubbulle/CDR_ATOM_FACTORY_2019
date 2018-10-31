<<<<<<< HEAD
# Install script for directory: /home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install")
=======
# Install script for directory: /home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/src

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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
<<<<<<< HEAD
   "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install/_setup_util.py")
=======
   "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install/_setup_util.py")
>>>>>>> Gabriel
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
<<<<<<< HEAD
file(INSTALL DESTINATION "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install" TYPE PROGRAM FILES "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/catkin_generated/installspace/_setup_util.py")
=======
file(INSTALL DESTINATION "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install" TYPE PROGRAM FILES "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/catkin_generated/installspace/_setup_util.py")
>>>>>>> Gabriel
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
<<<<<<< HEAD
   "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install/env.sh")
=======
   "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install/env.sh")
>>>>>>> Gabriel
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
<<<<<<< HEAD
file(INSTALL DESTINATION "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install" TYPE PROGRAM FILES "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/catkin_generated/installspace/env.sh")
=======
file(INSTALL DESTINATION "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install" TYPE PROGRAM FILES "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/catkin_generated/installspace/env.sh")
>>>>>>> Gabriel
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
<<<<<<< HEAD
   "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install/setup.bash")
=======
   "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install/setup.bash")
>>>>>>> Gabriel
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
<<<<<<< HEAD
file(INSTALL DESTINATION "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install" TYPE FILE FILES "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/catkin_generated/installspace/setup.bash")
=======
file(INSTALL DESTINATION "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install" TYPE FILE FILES "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/catkin_generated/installspace/setup.bash")
>>>>>>> Gabriel
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
<<<<<<< HEAD
   "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install/setup.sh")
=======
   "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install/setup.sh")
>>>>>>> Gabriel
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
<<<<<<< HEAD
file(INSTALL DESTINATION "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install" TYPE FILE FILES "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/catkin_generated/installspace/setup.sh")
=======
file(INSTALL DESTINATION "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install" TYPE FILE FILES "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/catkin_generated/installspace/setup.sh")
>>>>>>> Gabriel
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
<<<<<<< HEAD
   "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install/setup.zsh")
=======
   "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install/setup.zsh")
>>>>>>> Gabriel
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
<<<<<<< HEAD
file(INSTALL DESTINATION "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install" TYPE FILE FILES "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/catkin_generated/installspace/setup.zsh")
=======
file(INSTALL DESTINATION "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install" TYPE FILE FILES "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/catkin_generated/installspace/setup.zsh")
>>>>>>> Gabriel
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
<<<<<<< HEAD
   "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install/.rosinstall")
=======
   "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install/.rosinstall")
>>>>>>> Gabriel
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
<<<<<<< HEAD
file(INSTALL DESTINATION "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install" TYPE FILE FILES "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/catkin_generated/installspace/.rosinstall")
=======
file(INSTALL DESTINATION "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/install" TYPE FILE FILES "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/catkin_generated/installspace/.rosinstall")
>>>>>>> Gabriel
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
<<<<<<< HEAD
  include("/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/gtest/cmake_install.cmake")
  include("/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/hardware/cmake_install.cmake")
  include("/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/software/cmake_install.cmake")
=======
  include("/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/gtest/cmake_install.cmake")
  include("/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/hardware/cmake_install.cmake")
  include("/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/software/cmake_install.cmake")
>>>>>>> Gabriel

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
<<<<<<< HEAD
file(WRITE "/home/florian/Documents/dvb_ws/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/${CMAKE_INSTALL_MANIFEST}"
=======
file(WRITE "/home/gab/Bureau/DaVinciBot/CDR_ATOM_FACTORY_2019/cdr_robot_ws/build/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> Gabriel
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
