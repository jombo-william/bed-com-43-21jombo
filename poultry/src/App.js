





import React from 'react';
import { BrowserRouter as Router, Route, Routes, Link } from 'react-router-dom';
import Home from './home/home'; // Ensure this path is correct
import Service from './components/service/service';
import SignIn from './components/authentication/SignIn';
import Admin from './components/admin/Admin';
import Advert from './components/advertisement/Advert';
import CommunityForum from './components/community/communityForum';
import LatestActivity from './components/community/LatestActivity';
import LatestComments from './components/community/LatestComments';
import MembersList from './components/community/MembersList';
import Checker from './components/service/disease/Checker';
import SymptomsMap from './components/service/disease/SymptomsMap';
import Feed from './components/Feed'; // Import the Feed component
import BiosecurityMeasuresForPoultryFarms from './components/service/learningresource/BiosecurityMeasuresForPoultryFarms';
import GuideToRaisingChicken from './components/service/learningresource/GuideToRaisingChicken';
import NutritionalGuideForPoultry from './components/service/learningresource/NutritionalGuideForPoultry';
import PoultryHealthManagement from './components/service/learningresource/PoultryHealthManagement';

const App = () => {
  return (
    <Router>
      <div className="font-sans bg-gray-100 min-h-screen flex flex-col">
        {/* Header */}
        <header className="flex justify-between items-center p-4 bg-white shadow">
          <div className="flex items-center">
            <div className="bg-gray-800 text-white rounded-full w-32 h-32 flex items-center justify-center mb-4">
              <img src="placeholder.jpg" alt="PoultryConnect Logo" className="w-24 h-auto" />
            </div>
          </div>
          <div className="flex items-center space-x-4">
            <div className="bg-gray-800 text-white rounded-full w-10 h-10 flex items-center justify-center">
              {/* Account Logo */}
              <span className="text-lg">Ac</span>
            </div>
            <Link to="/sign-in" className="text-blue-500">Sign Up</Link>
          </div>
        </header>

        {/* Navigation */}
        <nav className="bg-white shadow p-4 flex justify-end">
          <ul className="flex space-x-4">
            <li><Link to="/" className="text-gray-700">Home</Link></li>
            <li><Link to="/service" className="text-gray-700">Services</Link></li>
            <li><Link to="/advert" className="text-gray-700">Advertisement</Link></li>
            <li><Link to="/community-forum" className="text-gray-700">Community</Link></li>
            <li><Link to="/about" className="text-gray-700">About Us</Link></li>
          </ul>
        </nav>

        {/* Main Content */}
        <main className="flex-grow p-4 bg-gray-100">
          <Routes>
            <Route path="/" element={<Home />} />
            <Route path="/service" element={<Service />} />
            <Route path="/feed-formulation" element={<Feed />} />
            <Route path="/Checker" element={<Checker />} />
            
            {/* Other routes */}
          </Routes>
        </main>

        {/* Footer */}
        <footer className="w-full bg-gray-800 text-gray-400 p-4 text-center">
          <a href="/terms" className="hover:underline">Terms and Conditions</a>
        </footer>
      </div>
    </Router>
  );
};

export default App;
