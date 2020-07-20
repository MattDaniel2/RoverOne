<!--
*** Thanks for checking out this README Template. If you have a suggestion that would
*** make this better, please fork the repo and create a pull request or simply open
*** an issue with the tag "enhancement".
*** Thanks again! Now go create something AMAZING! :D
-->





<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]



<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://github.com/MattDaniel2/RoverOne">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a>

  <h3 align="center">System Architecture</h3>

  <p align="center">
    An autonomous rover for exploring concepts in hardware, software, and systems!
    <br />
    <a href="https://github.com/MattDaniel2/RoverOne"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/MattDaniel2/RoverOne">View Demo</a>
    ·
    <a href="https://github.com/MattDaniel2/RoverOne/issues">Report Bug</a>
    ·
    <a href="https://github.com/MattDaniel2/RoverOne/issues">Request Feature</a>
  </p>
</p>



<!-- TABLE OF CONTENTS -->
## Table of Contents

* [About the Project](#about-the-project)
* [Version History](#version-history)
* [System Overview and Requirements](#system-overview-and-requirements)
* [Roadmap](#roadmap)
* [Acknowledgements](#acknowledgements)



<!-- ABOUT THE PROJECT -->
## About The Project

[![Product Name Screen Shot][product-screenshot]](https://example.com)

<!-- VERSION HISTORY -->
## Version History
`0.1` -- `7/19/2020` -- `Created initial document`

<!-- SYSTEM OVERVIEW AND REQUIREMENTS -->
## System Overview and Requirements
### Software Desktop Application
  * Responsible for Telemetry and Control interface of Rover
  * Control Interface
    * Arrow keys specifying direction
    * Throttle bar controllable by control/alt keys
    * Menu accessible by escape key
      * Dump rover trace to logfile
      * Dump telemetry to logfile
      * Console debug
      * Exit
    * Presents Telemetry from Rover
      * Speed
      * Power Output
      * Battery Level
      * Throttle
      * Heading/Navigation
### Processing Unit
  * Xilinx Arty-7 35T FPGA Development Board
    * Soft-core Microprocessor
    * Interface to Wi-Fi Tx/Rx
    * Interface to Power Controller
    * Interface to Motor Drivers (I2C?)
    * Interface to IMU
  * IMU
  * Wi-Fi Tx/Rx
### Powertrain Unit
  * Battery
  * Motor(s)
  * Motor Drivers
### Mechanical Design
  * Fuck if I know, let’s find out



<!-- ROADMAP -->
## Roadmap

See the [open issues](https://github.com/MattDaniel2/RoverOne/issues) for a list of proposed features (and known issues).



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/MattDaniel2/RoverOne.svg?style=flat-square
[contributors-url]: https://github.com/MattDaniel2/RoverOne/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/MattDaniel2/RoverOne.svg?style=flat-square
[forks-url]: https://github.com/MattDaniel2/RoverOne/network/members
[stars-shield]: https://img.shields.io/github/stars/MattDaniel2/RoverOne.svg?style=flat-square
[stars-url]: https://github.com/MattDaniel2/RoverOne/stargazers
[issues-shield]: https://img.shields.io/github/issues/MattDaniel2/RoverOne.svg?style=flat-square
[issues-url]: https://github.com/MattDaniel2/RoverOne/issues
[license-shield]: https://img.shields.io/github/license/MattDaniel2/RoverOne.svg?style=flat-square
[license-url]: https://github.com/MattDaniel2/RoverOne/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=flat-square&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/othneildrew
[product-screenshot]: images/screenshot.png
