# Introduction to Computer Science and Fundamentals of Programming

## About

This is the roadmap for getting started into Computer Science, and/or getting start on new progamming languages. This covers fundamental topics in programming, data structures and algorithms. I believe this roadmap is simple yet comprehensive, and fast-paced that only covers essential knowledge needed for aspiring developers, without tackling advanced and specialized topics.

---

```mermaid
flowchart TD
    root(<h2>CS Fundamentals</h2>)
            sub_root1([<h3>Programming Essentials</h3>])
                br1([<b>Data <br>Structures 1</b>])
                    node1[[Array<br> Linked List<br> Stacks<br> Queues<br> Hast Tables]]
                br2([<b>Algorithms 1</b>])
                    node2([Analysis of Algorithms])
                    node3([Sorting])
                        subnode1[[Insertion Sort<br> Selection Sort<br> Bubble Sort<br> Merge Sort<br> Quick Sort]]
                    node4([Searching])
                        subnode2[[Linear Search<br> Binary Search]]
                    node5([Recursion])

        root-->sub_root1
        sub_root1-->br1
        sub_root1-->br2
        br1-->node1
        br2-->node2
        br2-->node3
        br2-->node4
        br2-->node5
        node3-->subnode1
        node4-->subnode2
```
