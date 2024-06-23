# https://lab.soict.hust.edu.vn/login/index.php
# Prompt for and get the input values from the user
puts "Enter value for x:"
x = gets.to_f

puts "Enter value for y:"
y = gets.to_f

puts "Enter value for z:"
z = gets.to_f

# Perform the calculation
result = ((x + y + z) / (x * x + y * y + 1)) - (x - z * Math.cos(y)).abs

# Print the result with six decimal places
puts format('%.6f', result)
