import React from "react";
import { FaEye, FaEdit, FaTrashAlt, FaHome, FaBars, FaUsers, FaCalendar, FaCog, FaBullhorn, FaUser, FaClipboardCheck } from "react-icons/fa";

const App = () => {
  return (
    <div className="h-screen bg-[#0f1a0f] text-white flex">
      {/* Sidebar */}
      <div className="w-16 h-2/3 bg-green-500/20 backdrop-blur-md flex flex-col items-center justify-between py-4 space-y-2 rounded-full self-center">
        {/* Logo */}
        <img
          src="https://via.placeholder.com/40" // Replace with your logo URL
          alt="Logo"
          className="w-10 h-10 rounded-full mb-2"
        />
        <FaCalendar className="text-xl cursor-pointer hover:text-green-400" />
        <FaClipboardCheck className="text-xl cursor-pointer hover:text-green-400" />
        <FaUsers className="text-xl cursor-pointer hover:text-green-400" />
        <FaBullhorn className="text-xl cursor-pointer hover:text-green-400" />
        <FaCog className="text-xl cursor-pointer hover:text-green-400" />
      </div>

      {/* Main Content */}
      <div className="flex-1 flex flex-col p-6 relative">
        {/* Header */}
        <div className="flex justify-center items-center mb-4">
          <h1 className="text-4xl font-semibold">TEAMS</h1>
        </div>

        {/* Top Right Buttons */}
        <div className="absolute top-4 right-6 flex space-x-4">
          <FaHome className="text-xl cursor-pointer hover:text-green-400" title="Home" />
          <FaUser className="text-xl cursor-pointer hover:text-green-400" title="Contact" />
          <FaBars className="text-xl cursor-pointer hover:text-green-400" title="Menu" />
        </div>

        {/* Team Cards */}
        <div className="bg-white/10 backdrop-blur-md rounded-xl p-20 shadow-lg">
          <div className="space-y-10">
            {/* Team X */}
            <div className="bg-white/20 backdrop-blur-md rounded-lg flex items-center justify-between p-6 shadow-md">
              <span className="font-medium">Team X</span>
              <div className="flex space-x-3">
                <FaEye className="cursor-pointer hover:text-green-400" />
                <FaEdit className="cursor-pointer hover:text-green-400" />
                <FaTrashAlt className="cursor-pointer hover:text-red-400" />
              </div>
            </div>

            {/* Team Y */}
            <div className="bg-white/20 backdrop-blur-md rounded-lg flex items-center justify-between p-6 shadow-md">
              <span className="font-medium">Team Y</span>
              <div className="flex space-x-3">
                <FaEye className="cursor-pointer hover:text-green-400" />
                <FaEdit className="cursor-pointer hover:text-green-400" />
                <FaTrashAlt className="cursor-pointer hover:text-red-400" />
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  );
};

export default App;
