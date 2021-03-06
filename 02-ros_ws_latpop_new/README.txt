This is the workspace on the laptop that will handle the communication with the camera+localization of the markers
and the bluetooth connections with the ePucks

Requirements
------------
Libraries

* Python Bluetooth or Pybluez
* Python Image Library (PIL)

	$ sudo apt-get install libbluetooth-dev python-setuptools python-imaging python-bluez

E-puck robots must run the [webots](www.cyberbotics.com) firmware (resources/firmware/webots-firmware-1.4.4.hex).

ROS Libraries
	$ sudo apt-get install ros-indigo-ar-track-alvar ros-indigo-usb-cam ros-kinetic-camera-info-manager

catkin_ws/src/marker_controller/scripts/pose_remap.py needs to be executable

for the usb_cam node (which is missing in ros kinetic)
cd ~/catkin_ws/src
git clone https://github.com/bosch-ros-pkg/usb_cam.git
cd ..
catkin_make

How to use:
------------

Calibrating the cam:
	$ rosrun camera_calibration cameracalibrator.py --size 8x6 --square 0.0238 image:=/usb_cam_node/image_raw camera:=/usb_cam_node

For the markers:
	$ roslaunch marker_controller marker_positions.launch
	
For the ePuck Control:roslaunch epuck_driver epuck_controller.launch epuck_address:='MAC'
	$ roslaunch epuck_driver epuck_controller.launch epuck_address:='10:00:E8:6C:D7:C8'
Test teleoperating with the keyboard (the package ros-indigo-turtlebot-teleop must be installed)
Run this command in another window
	$ roslaunch epuck_driver epuck_teleop.launch





Some useful bluetooth commands
--------------------

To find the nearby bluetooth devices and get their MAC address:

    $ hcitool scan

To automatically set the bluetooth password when you start the epuck_controller.launch (the XXXX is the password, eg. 1515)

    $ bluetooth-agent XXX &

You can also edit or create a file in /var/lib/bluetooth/XX:XX:XX:XX:XX:XX/pincodes (XX:XX:XX:XX:XX:XX is your bluetooth MAC address) and add:

	<MAC address epuck> <PASSWORD>

And restart the bluetooth service:

	$ sudo service bluetooth restart 
	

EPucks					Marker#
bt0 5C:C9:D3:65:2A:55
10:00:E8:6C:D8:20	e-puck_1573	1
10:00:E8:6C:D7:E6	e-puck_1589	2

bt1 A9:86:00:64:24:83
10:00:E8:6C:D7:BD	e-puck_1554	3
10:00:E8:52:A9:69	e-puck_1107	6

bt3 00:11:67:B6:C3:C6
10:00:E8:6C:D8:1E	e-puck_1570 5


broken:
10:00:E8:6C:D7:C8	e-puck_1593	7 (description: not going in a straight line, turning left, jittery movement)
10:00:E8:6C:EC:71	e-puck_1555	8 (right wheel not moving at all)

Connect them through the ubuntu BT thingy
then on first connection you have to type in the PW for each ePuck again, but aparently only once

How to run on different PCs
On slave:
export ROS_MASTER_URI=http://magritte:11311/
export ROS_MASTER_URI=http://localhost:11311
/epuck3/cmd_vel
/ar_pose_marker Type: ar_track_alvar_msgs/AlvarMarkers

on tars
cd ~/Dropbox/UFMG/04-2-2016/JornalPaper/02-code/03-ros_ws_latpop_new;source init.sh
roslaunch laptop_node 04-table-overhead-cam_full_suit.launch
roslaunch laptop_node 04-table-overhead-cam_














