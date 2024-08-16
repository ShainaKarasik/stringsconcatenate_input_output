#include <iostream>
#include <string>

int main() {

	/* Hello!Welcome to my github!This is a little program I made up on the spot to start off where I finished studyingn last night
    to reiterate important basic concepts: The main function is the entry point of our program in C++ 
	It is best practice to name this file main.cpp--> my admission I was letting these files be named source.cpp, but no longer!
	notice I don't use under the part of the header where i include files and libraries, the statement often used,
	"using the namespace std;" because I like to write out everything in full.  */
	/* As my mom's culture has a saying, "short cut draws blood." I believe it to be true!  */
//coding ORIGINALLY DONE BY: SJK or SHaina Jheanelle Karasik, future game engineer for Activsion Blizzard's Level Up U Internship trainee!

	std::string str1;
	str1 = "This is my Git Hub  ";

	std::string str2;
	str2 = "I believe that my apps and projects are a good start!";

	std::string stR2;
	stR2 = " But if they are not as impressive as they should be, I will work much harder! I never give up, and I love to continually learn. Continuous learning throughout my career is important to me, just like habing excellent communication is!";

	std::string str3;
	str3 = "technical portfolio (all projects written in source code C++), with some projects featuring some Unreal Game Engine 5! ";

	std::cout << str1 + str3 << str2 << " However, like I said, I work on my studies daily as a full-time student and I will keep making more apps and games increasing in asthestic improvement and complexity as well as more use of Unreal Engine 5! " << " SO please be sure to follow me on Github! Thank you!";

	std::string str4 = " your goal";
	std::cout << " What is " << str4 << " for your career?";

	std::string myCareer;
	std::cin >> myCareer;

	std::cout << "That's a great goal to have, " << myCareer << "  as a long-term way of making a living! Stick with it!" << std::endl;

	std::cout << std::endl << std::endl;

	return 0;
}