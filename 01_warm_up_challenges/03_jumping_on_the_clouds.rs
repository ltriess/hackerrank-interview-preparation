/*
Example 1:
    Input:
        7
        0 0 1 0 0 1 0
    Output:
        4
    
Example 2:
    Input:
        6
        0 0 0 1 0 0
    Output:
        3
*/
use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut iterator = stdin.lock().lines();

    let n = iterator.next().unwrap().unwrap().parse::<usize>().unwrap();

    let line = iterator.next().unwrap().unwrap();
    let clouds: Vec<u32> = line.split_whitespace().map(|x| x.parse().expect("parse error")).collect();

    let mut i: usize = 0;
    let mut jumps = 0;

    while i < n - 1 {
        if (i < n - 2) {
            if clouds[i + 2] == 0 {
                i += 1;
            }
        }

        jumps += 1;
        i += 1;
    }


    println!("{:?}", jumps)
}
