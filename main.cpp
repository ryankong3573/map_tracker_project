#include <iostream>
#include <vector>
using namespace std;

struct point{
    string coordinates;
    bool isWall;
    int value;
};

struct address{
    int row;
    int col;
};

void create_map()
{

}

void print_map()
{
    //this function will create a 2d array and print out its elements
    //simulating a map with coordinates
    //one element is a node containing a string e.g "(1,2)" TBD a bool whether its a wall
}

address get_current_address(const vector<vector<point>> &grid)
{
    point current_point;
    cout<<"Enter your current address in map";
    cin>>current_point.coordinates;

    address current_address;
    current_address.col = -1;
    current_address.row = -1;

    //search for this coordinates in the given map
    for(int row = 0; row<grid.size(); row++)
    {
        for(int col=0; col<grid[0].size(); col++)
        {
            if(current_point.coordinates == grid[row][col].coordinates)
            {
                if(grid[row][col].isWall)
                {
                    cout<<"Address given is a wall!";
                    return current_address;
                }
                else{
                    current_address.col = col;
                    current_address.row = row;
                    return current_address;
                }
            }
        }
    }
    cout<<"Invalid address";
    return current_address;
}


int main(){
    //create a 2d array simulating a map
    const int ROW = 10;
    const int COL = 10;
    vector<vector<point>> grid(ROW, vector<point>(COL));

    //prints out map to user (2d array)(will print out [x][y] of each element)
    //each element is a node containing bool of whether it's visited and a wall, and a value

    //asks user to enter its current address
    //program will receive user input as current_address[(x_current,y_current)]

    //asks user to enter its destination
    //program will receive user input as user_destination[(x_destination, y_destination)]

    //bfs_algorithm(current_address, user_destination, map) 
    //bfs will identify the value of the element(user_destination) and track that as goal
    //bfs will return a path of the steps it took to reach destination

    //print out map to user with path shown
}