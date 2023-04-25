cmake_minimum_required(VERSION 3.21)
project(naloga0602)

set(CMAKE_CXX_STANDARD 14)

add_executable(naloga0602 main.cpp Position.cpp Position.h Size.cpp Size.h View.cpp View.h Layout.cpp Layout.h Xml.h Button.cpp Button.h ImageView.cpp ImageView.h ClickListener.h)
