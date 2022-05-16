#include <stack>
#include "OrgChart.hpp"

using namespace std;
using namespace ariel;

OrgChart::OrgChart(){

}

OrgChart::~OrgChart(){

}

OrgChart& OrgChart::add_root(const string & title){
    return *this;
}

OrgChart& OrgChart::add_sub(const string & father, const string &son){
    return *this;
}

Node* OrgChart::searchNode(const string &title){
    return nullptr;
}

ostream & ariel::operator<<(ostream& out, const OrgChart &org){
    return out;
}

OrgChart::Iterator::Iterator(Node* node, const string &method){
    
}

void OrgChart::Iterator::iter_begin_level_order(Node *node){

}

void OrgChart::Iterator::iter_begin_preorder(Node *node){

}

void OrgChart::Iterator::iter_begin_reverse_order(Node *node){

}

vector<Node*> OrgChart::Iterator::getNodes(){
    return vector<Node*>();
}

string* OrgChart::Iterator::operator->(){
    string* temp;
    return temp;
}

bool OrgChart::Iterator::operator!=(const Iterator &other){
    return false;
}

string OrgChart::Iterator::operator*(){
    return "Temp";
}

OrgChart::Iterator & OrgChart::Iterator::operator++(){
    return *this;
}

OrgChart::Iterator OrgChart::begin_level_order(){
    Iterator temp = Iterator(nullptr,"Temp");
    return temp;
}
OrgChart::Iterator OrgChart::end_level_order(){
    Iterator temp = Iterator(nullptr,"Temp");
    return temp;
}
OrgChart::Iterator OrgChart::begin_reverse_order(){
    Iterator temp = Iterator(nullptr,"Temp");
    return temp;
}
OrgChart::Iterator OrgChart::reverse_order(){
    Iterator temp = Iterator(nullptr,"Temp");
    return temp;
}
OrgChart::Iterator OrgChart::begin_preorder(){
    Iterator temp = Iterator(nullptr,"Temp");
    return temp;
}
OrgChart::Iterator OrgChart::end_preorder(){
    Iterator temp = Iterator(nullptr,"Temp");
    return temp;
}
OrgChart::Iterator OrgChart::begin(){
    Iterator temp = Iterator(nullptr,"Temp");
    return temp;
}
OrgChart::Iterator OrgChart::end(){
    Iterator temp = Iterator(nullptr,"Temp");
    return temp;
}