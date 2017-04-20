#include <Sem2_Lab5.hpp>
#include <catch.hpp>

SCENARIO("Inserting a nonexistent node") {
    binarytree <int> tree;
    tree.insert(14);
    int rv = r.insert(15);
    
    REQUIRE( rv == 0);
}

SCENARIO("Inserting an already existent node") {
    binarytree <int> tree;
    tree.insert(14);
    int rv = tree.insert(14);
    
    REQUIRE( rv == 1);
}

SCENARIO("Search for an existent node") {
    binarytree <int> tree;
    tree.insert(14);
    tree.insert(15);
    int rv = tree.search(15);
    
    REQUIRE( rv == 0);
}

SCENARIO("Search for a nonexistent node") {
    binarytree <int> tree;
    tree.insert(14);
    tree.insert(15);
    int rv = tree.search(17);
    
    REQUIRE( rv == 1);
}

SCENARIO("Deleting an existent node") {
    binarytree <int> tree;
    tree.insert(14);
    tree.insert(15);
    int rv = tree.destroy_node(15);
    
    REQUIRE( rv == 0);
}

SCENARIO("Deleting a nonexistent node") {
    binarytree <int> tree;
    tree.insert(14);
    tree.insert(15);
    int rv = tree.destroy_node(17);
    
    REQUIRE( rv == 1);
}
