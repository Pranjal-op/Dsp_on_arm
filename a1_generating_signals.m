clc; %clear command window
close all; %close all figure
clear; %erase all existing variables
workspace; %make sure workspace is showing

%show numbers in a compact form with 5 digit
format long
format compact

fontsize = 2;
% sample 2000 time in 1 sec and sample for 0.5 sec 2khz samp rate
t = 0 : 1/2000 : 0.5;

% defining wave parameter
f1 = 10; %10 hz or 10 cycle per sec
T1 = 1/f1;
amp1 = 1;


f2 = 100; %100 hz or 10 cycle per sec
T2 = 1/f2;
amp2 = 1;

%make signal
signal1 = amp1*sin(2*pi*t/T1);
signal2 = amp2*sin(2*pi*t/T2);

plot(t,signal2);
