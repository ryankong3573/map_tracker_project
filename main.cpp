#include <iostream>
using namespace std;


struct node{
    string value;
    bool is_wall;
    bool visited;
    int x;
    int y;
};

node* get_neighbours(node* current)
{
    node* neighbour_nodes = new node[4]();
    return neighbour_nodes;
}

void bfs_algorithm(node* start, node* goal)
{
    //Load Starting node to frontier
    node* current = start;
    node* visited = new node[1]; //1 should be the dimension of the map (number of nodes)
    int size = 0; //tracks the number of elements in queue

    while(size!=0)
    {
        //when goal node is reached
        if(current==goal)
        {
            break;
        }

        
        node* array = get_neighbours(current);
        for(int i = 0; i<4; i++)
        {
            if //not visited 
                if //not wall
                    //enqueue
        }
    }

}

int main()
{

}
