/*
Design a parking system for a parking lot. The parking lot has three kinds of parking spaces: big, medium, and small, with a fixed number of slots for each size.

Implement the ParkingSystem class:

~ ParkingSystem(int big, int medium, int small) Initializes object of the ParkingSystem class. The number of slots for each parking space are given as part of the constructor.
~ bool addCar(int carType) Checks whether there is a parking space of carType for the car that wants to get into the parking lot. carType can be of three kinds: big, medium, or small, which are represented by 1, 2, and 3 respectively. A car can only park in a parking space of its carType. If there is no space available, return false, else park the car in that size space and return true.


Input
["ParkingSystem", "addCar", "addCar", "addCar", "addCar"]
[[1, 1, 0], [1], [2], [3], [1]]
Output
[null, true, true, false, false]

*/

class ParkingSystem {

    int big, medium, small;
    public ParkingSystem(int big, int medium, int small) {
        this.big=big;
        this.medium=medium;
        this.small=small;
    }
    
    public boolean addCar(int carType) {
        if(carType==1)
        {
            if(this.big>=1)
            {
                this.big=this.big-1;
                return true;
            }
        }
        if(carType==2)
        {
            if(this.medium>=1)
            {
                this.medium=this.medium-1;
                return true;
            }
        }
        if(carType==3)
        {
            if(this.small>=1)
            {
                this.small=this.small-1;
                return true;
            }
        }
        return false;
    }
}  
