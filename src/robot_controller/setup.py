import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'robot_controller'
submodules = package_name + "/motor"

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name, submodules],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='parallels',
    maintainer_email='parallels@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "find_object = robot_controller.find_obj_controller:main",
            "position_listener = robot_controller.pan_tilt_controller:main",
            "servo_control = robot_controller.servo_controller:main"
        ],
    },
)
